// Generated by commsdsl2tools_qt v6.3.3

#include "MonHw2.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res3.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res4.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res8.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/MonHw2.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_ofsI(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonHw2Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::OfsI;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_magI(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonHw2Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::MagI;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_ofsQ(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonHw2Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::OfsQ;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_magQ(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonHw2Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::MagQ;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_cfgSource(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonHw2Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::CfgSource;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add("FlashImage", 102)
            .add("OTP", 111)
            .add("ConfigPins", 112)
            .add("ROM", 114)
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonHw2Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res3(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_lowLevCfg(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonHw2Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::LowLevCfg;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonHw2Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved2;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res8(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_postStatus(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonHw2Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::PostStatus;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved3(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonHw2Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved3;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res4(Field::name(), serHidden);
    return props;
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_ofsI(false));
    props.append(createProps_magI(false));
    props.append(createProps_ofsQ(false));
    props.append(createProps_magQ(false));
    props.append(createProps_cfgSource(false));
    props.append(createProps_reserved1(false));
    props.append(createProps_lowLevCfg(false));
    props.append(createProps_reserved2(false));
    props.append(createProps_postStatus(false));
    props.append(createProps_reserved3(false));
    return props;
}

} // namespace

class MonHw2Impl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::MonHw2<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        MonHw2Impl
    >
{
public:
    MonHw2Impl() = default;
    MonHw2Impl(const MonHw2Impl&) = delete;
    MonHw2Impl(MonHw2Impl&&) = delete;
    virtual ~MonHw2Impl() = default;
    MonHw2Impl& operator=(const MonHw2Impl&) = default;
    MonHw2Impl& operator=(MonHw2Impl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MonHw2::MonHw2() : m_pImpl(new MonHw2Impl) {}
MonHw2::~MonHw2() = default;

MonHw2& MonHw2::operator=(const MonHw2& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MonHw2& MonHw2::operator=(MonHw2&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

MonHw2::MsgIdParamType MonHw2::doGetId()
{
    return ::cc_ublox::message::MonHw2<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* MonHw2::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& MonHw2::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MonHw2::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void MonHw2::resetImpl()
{
    m_pImpl->reset();
}

bool MonHw2::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const MonHw2*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MonHw2::MsgIdParamType MonHw2::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MonHw2::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MonHw2::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MonHw2::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MonHw2::lengthImpl() const
{
    return m_pImpl->length();
}

bool MonHw2::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
