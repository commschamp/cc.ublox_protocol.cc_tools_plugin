// Generated by commsdsl2tools_qt v6.3.0

#include "RxmSfrbx.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/GnssId.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res1.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/RxmSfrbx.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_gnssId(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmSfrbxFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::GnssId;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_gnssId(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_svid(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmSfrbxFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Svid;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmSfrbxFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res1(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_freqId(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmSfrbxFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FreqId;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_numWords(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmSfrbxFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::NumWords;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .readOnly()
            .asMap();
}

static QVariantMap createProps_chn(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmSfrbxFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Chn;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_version(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmSfrbxFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved3(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmSfrbxFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved3;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res1(Field::name(), serHidden);
    return props;
}

struct DwrdMembers
{
    static QVariantMap createProps_element(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::RxmSfrbxFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::DwrdMembers::Element;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .asMap();
    }
}; // struct DwrdMembers

static QVariantMap createProps_dwrd(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmSfrbxFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Dwrd;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .serialisedHidden()
            .add(DwrdMembers::createProps_element(serHidden))
            .appendIndexToElementName()
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_gnssId(false));
    props.append(createProps_svid(false));
    props.append(createProps_reserved1(false));
    props.append(createProps_freqId(false));
    props.append(createProps_numWords(false));
    props.append(createProps_chn(false));
    props.append(createProps_version(false));
    props.append(createProps_reserved3(false));
    props.append(createProps_dwrd(false));
    return props;
}

} // namespace

class RxmSfrbxImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::RxmSfrbx<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        RxmSfrbxImpl
    >
{
public:
    RxmSfrbxImpl() = default;
    RxmSfrbxImpl(const RxmSfrbxImpl&) = delete;
    RxmSfrbxImpl(RxmSfrbxImpl&&) = delete;
    virtual ~RxmSfrbxImpl() = default;
    RxmSfrbxImpl& operator=(const RxmSfrbxImpl&) = default;
    RxmSfrbxImpl& operator=(RxmSfrbxImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

RxmSfrbx::RxmSfrbx() : m_pImpl(new RxmSfrbxImpl) {}
RxmSfrbx::~RxmSfrbx() = default;

RxmSfrbx& RxmSfrbx::operator=(const RxmSfrbx& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

RxmSfrbx& RxmSfrbx::operator=(RxmSfrbx&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

RxmSfrbx::MsgIdParamType RxmSfrbx::doGetId()
{
    return ::cc_ublox::message::RxmSfrbx<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* RxmSfrbx::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& RxmSfrbx::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void RxmSfrbx::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void RxmSfrbx::resetImpl()
{
    m_pImpl->reset();
}

bool RxmSfrbx::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const RxmSfrbx*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

RxmSfrbx::MsgIdParamType RxmSfrbx::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus RxmSfrbx::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus RxmSfrbx::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool RxmSfrbx::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t RxmSfrbx::lengthImpl() const
{
    return m_pImpl->length();
}

bool RxmSfrbx::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
