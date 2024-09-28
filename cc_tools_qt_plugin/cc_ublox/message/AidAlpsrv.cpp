// Generated by commsdsl2tools_qt v6.3.4

#include "AidAlpsrv.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/AidAlpsrv.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_idSize(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidAlpsrvFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::IdSize;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_type(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidAlpsrvFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Type;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_ofs(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidAlpsrvFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Ofs;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_size(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidAlpsrvFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Size;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_fileId(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidAlpsrvFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FileId;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_dataSize(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidAlpsrvFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::DataSize;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .readOnly()
            .asMap();
}

static QVariantMap createProps_id1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidAlpsrvFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Id1;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_id2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidAlpsrvFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Id2;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_id3(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidAlpsrvFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Id3;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_data(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidAlpsrvFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Data;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_idSize(false));
    props.append(createProps_type(false));
    props.append(createProps_ofs(false));
    props.append(createProps_size(false));
    props.append(createProps_fileId(false));
    props.append(createProps_dataSize(false));
    props.append(createProps_id1(false));
    props.append(createProps_id2(false));
    props.append(createProps_id3(false));
    props.append(createProps_data(false));
    return props;
}

} // namespace

class AidAlpsrvImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::AidAlpsrv<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        AidAlpsrvImpl
    >
{
public:
    AidAlpsrvImpl() = default;
    AidAlpsrvImpl(const AidAlpsrvImpl&) = delete;
    AidAlpsrvImpl(AidAlpsrvImpl&&) = delete;
    virtual ~AidAlpsrvImpl() = default;
    AidAlpsrvImpl& operator=(const AidAlpsrvImpl&) = default;
    AidAlpsrvImpl& operator=(AidAlpsrvImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

AidAlpsrv::AidAlpsrv() : m_pImpl(new AidAlpsrvImpl) {}
AidAlpsrv::~AidAlpsrv() = default;

AidAlpsrv& AidAlpsrv::operator=(const AidAlpsrv& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

AidAlpsrv& AidAlpsrv::operator=(AidAlpsrv&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

AidAlpsrv::MsgIdParamType AidAlpsrv::doGetId()
{
    return ::cc_ublox::message::AidAlpsrv<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* AidAlpsrv::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& AidAlpsrv::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void AidAlpsrv::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void AidAlpsrv::resetImpl()
{
    m_pImpl->reset();
}

bool AidAlpsrv::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const AidAlpsrv*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

AidAlpsrv::MsgIdParamType AidAlpsrv::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus AidAlpsrv::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus AidAlpsrv::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool AidAlpsrv::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t AidAlpsrv::lengthImpl() const
{
    return m_pImpl->length();
}

bool AidAlpsrv::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
