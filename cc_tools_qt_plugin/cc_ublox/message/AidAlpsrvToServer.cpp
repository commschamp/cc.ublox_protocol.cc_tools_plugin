// Generated by commsdsl2tools_qt v6.3.0

#include "AidAlpsrvToServer.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/AidAlpsrvToServer.h"

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
    using Field = ::cc_ublox::message::AidAlpsrvToServerFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::IdSize;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_type(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidAlpsrvToServerFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Type;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_ofs(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidAlpsrvToServerFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Ofs;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_size(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidAlpsrvToServerFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Size;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .readOnly()
            .asMap();
}

static QVariantMap createProps_fileId(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidAlpsrvToServerFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FileId;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

struct DataMembers
{
    static QVariantMap createProps_element(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::AidAlpsrvToServerFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::DataMembers::Element;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .asMap();
    }
}; // struct DataMembers

static QVariantMap createProps_data(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidAlpsrvToServerFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Data;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .serialisedHidden()
            .add(DataMembers::createProps_element(serHidden))
            .appendIndexToElementName()
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
    props.append(createProps_data(false));
    return props;
}

} // namespace

class AidAlpsrvToServerImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::AidAlpsrvToServer<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        AidAlpsrvToServerImpl
    >
{
public:
    AidAlpsrvToServerImpl() = default;
    AidAlpsrvToServerImpl(const AidAlpsrvToServerImpl&) = delete;
    AidAlpsrvToServerImpl(AidAlpsrvToServerImpl&&) = delete;
    virtual ~AidAlpsrvToServerImpl() = default;
    AidAlpsrvToServerImpl& operator=(const AidAlpsrvToServerImpl&) = default;
    AidAlpsrvToServerImpl& operator=(AidAlpsrvToServerImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

AidAlpsrvToServer::AidAlpsrvToServer() : m_pImpl(new AidAlpsrvToServerImpl) {}
AidAlpsrvToServer::~AidAlpsrvToServer() = default;

AidAlpsrvToServer& AidAlpsrvToServer::operator=(const AidAlpsrvToServer& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

AidAlpsrvToServer& AidAlpsrvToServer::operator=(AidAlpsrvToServer&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

AidAlpsrvToServer::MsgIdParamType AidAlpsrvToServer::doGetId()
{
    return ::cc_ublox::message::AidAlpsrvToServer<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* AidAlpsrvToServer::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& AidAlpsrvToServer::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void AidAlpsrvToServer::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void AidAlpsrvToServer::resetImpl()
{
    m_pImpl->reset();
}

bool AidAlpsrvToServer::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const AidAlpsrvToServer*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

AidAlpsrvToServer::MsgIdParamType AidAlpsrvToServer::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus AidAlpsrvToServer::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus AidAlpsrvToServer::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool AidAlpsrvToServer::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t AidAlpsrvToServer::lengthImpl() const
{
    return m_pImpl->length();
}

bool AidAlpsrvToServer::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
